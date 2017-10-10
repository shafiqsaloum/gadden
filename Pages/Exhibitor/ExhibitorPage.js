var Observable = require("FuseJS/Observable");
var data = Observable();
var entry = Observable("")
var FileSystem = require("FuseJS/FileSystem");
var path = FileSystem.dataDirectory + "/" + "cache_star.json"
var all = []


const test = (json) =>{
  let res = []

  json.forEach((elem)=>{
    const topush = {elem: Object.keys(elem).forEach((elem)=>{
      const topush = []
      if (elem instanceof Object)
          topush.push(test(elem))
      else
        topush.push(elem)
    })}
    res.push(topush)
  })
  return res
}

function Exhibitor(item) {
    this.name = item.name;
    this.logo = item.profile.logotype.thumbnails.large
    this.about = item.profile.aboutUs;
    this.offer = item.profile.weOffer;
    this.education = item.profile.desiredProgramme;
    this.link = item.profile.urlWebsite;
    this.dates = item.profile.exhibition;
    this.map = item.profile.url;
    this.favorite = '#ffffff'
    this.toggle = '#ffff00'
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
    if(x.name.toLowerCase()===y[i].name.toLowerCase())
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
  results.forEach((x)=>{
    try{
    items.push(new Exhibitor(x))
  }catch(err){
    
  }
  })
  items.sort((x, y)=>{return x.name > y.name})
  let  i = -1
  while(++i < items.length){
    if(!i || items[i].name.charAt(0) !== items[i - 1].name.charAt(0)){
      items[i].letter = items[i].name.charAt(0)
      items[i].visibility = 'Visible'
    }
  }
  FileSystem.exists(path
  ).then(function(exists) {
    if(exists){
      FileSystem.readTextFromFile(path
      ).then(function(contents) {
        contents = JSON.parse(contents)
        items.forEach((elem)=>{
          const i = search(elem, contents.liked_stars)
          if (i !== -1){
            elem.favorite = '#ffff00'
            elem.toggle = '#ffffff'
          }
        })
        all = items
        data.replaceAll(items)
      }, function(error) {
        console.log(error)
    })
  }else{
    json = {'liked_stars': []}
    json = JSON.stringify(json)
    FileSystem.appendTextToFile(path, json)
        .then(function() {
            return FileSystem.readTextFromFile(path);
        })
        all = items
        data.replaceAll(items)
  }
  }, function(error) {
          console.log("Unable to check if file exists")
  })
}).catch(function(e) {
    console.log("Error: " + e.message)
})

const searchExhabitor = (args) =>{
  const exhibitors = args.data.exhibitor._values
  const userInput = {'name': entry.value}
  let i = search(userInput, exhibitors)
  if(i !== -1)
    data.replaceAll([exhibitors[i]])
  else
    data.replaceAll(all)
}

module.exports = {
    exhibitor: data,
    exhibitorClicked: exhibitorClicked,
    selectedExhibitor: selectedExhibitor,
    saveStar: saveStar,
    search: searchExhabitor,
    entry: entry
};
