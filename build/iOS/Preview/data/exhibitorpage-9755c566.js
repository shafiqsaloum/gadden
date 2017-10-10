var Observable = require("FuseJS/Observable");
var data = Observable();
var FileSystem = require("FuseJS/FileSystem");
var path = FileSystem.dataDirectory + "/" + "cache_stars1.json"

function Exhibitor(item) {
    this.name = item.name;
    this.logo = item.profile.logotype.thumbs.large;
    this.about = item.profile.aboutUs;
    this.offer = item.profile.weOffer;
    this.education = item.profile.desiredProgramme;
    this.link = item.profile.urlWebsite;
    this.dates = item.profile.exhibition;
    this.map = item.profile.url;
    this.favorite = '#ffff00'
    this.toggle = '#ffffff'
};

const equal_json = (x, y) => {
    const x_keys = Object.keys(x).sort()
    const y_keys = Object.keys(y).sort()
    return (x_keys.length === y_keys.length
        && x_keys.every((u, i) => {
            return (u === y_keys[i] && x[u] === y[y_keys[i]])
        }))
}

const search = (x, y) =>{
  let i = -1
  while(++i < y.length){
    if(x.name===y[i].name)
      break
  }

  return (i === y.length ? -1 : i)
}

var selectedExhibitor = Observable();

function exhibitorClicked(args) {
  selectedExhibitor.value = args.data
};

// not done just a prototype
function saveStar(args){
FileSystem.exists(path
).then(function(x) {
  if(x){
    FileSystem.readTextFromFile(path
    ).then(function(contents) {
      contents = JSON.parse(contents)
      const i = search(args.data, contents.liked_stars)
      if (i === -1){
        contents.liked_stars.push(args.data)
      }
      else{
        contents.liked_stars.splice(i, 1)
      }

      contents = JSON.stringify(contents)
      FileSystem.writeTextToFile(path, contents)
          .then(function() {
              return FileSystem.readTextFromFile(path);
          })
          .then(function(text) {
            test = JSON.parse(text)
            console.log("The read file content is: ");
            text = JSON.parse(text)
            console.log(JSON.stringify(text))
          })
          .catch(function(error) {
              console.log("Unable to read file due to error:" + error);
          });
}, function(error) {
    console.log(error);
  })
}
// New file
else{
  console.log('Does not exists')
  let json = {'liked_stars': [args.data]}
  json = JSON.stringify(json)
  FileSystem.appendTextToFile(path, json)
      .then(function() {
          return FileSystem.readTextFromFile(path);
      })
      .then(function(text) {
          console.log("The read file content was: " + text);
      })
      .catch(function(error) {
          console.log("Unable to read file due to error:" + error);
      })
}
}, function(error) {
        console.log("Unable to check if file exists")
    })
}

fetch(
  "http://p17.jexpo.se/gadden/exhibitors/ws:2017?getAttributes=true"
).then(function(response) {
  let result = undefined
  results = JSON.parse(JSON.stringify(response))
  results = JSON.parse(results._bodyInit)
  results = results.results
  let items = []
  let trigger = 0
  results.forEach(function(r) {
    trigger++
    const exhibitor = new Exhibitor(r)
    FileSystem.exists(path
    ).then(function(x) {
      if(x){
        FileSystem.readTextFromFile(path
        ).then(function(contents) {
          contents = JSON.parse(contents)
          const i = search(exhibitor, contents.liked_stars)
          if (i === -1){
            exhibitor.favorite = '#ffffff'
            exhibitor.toggle = '#ffff00'
          }
          items.push(exhibitor)
          console.log(exhibitor.favorite)
          if(trigger === results.length){
            items.sort((x, y)=>{ return x.name > y.name})
            data.replaceAll(items)
          }
    }, function(error) {
        console.log(error);
      })
    }
    }, function(error) {
            console.log("Unable to check if file exists")
          })
    });
  debug_log("@data: " + JSON.stringify(data))
}).catch(function(e) {
    console.log("Error: " + e.message)
});

module.exports = {
    exhibitor: data,
    exhibitorClicked: exhibitorClicked,
    selectedExhibitor: selectedExhibitor,
    saveStar: saveStar,
    search: search
};
