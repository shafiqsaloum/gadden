var Observable = require("FuseJS/Observable");
var program = Observable();
var selectedProgram = Observable();
let daysOfWeek = ['SONDAG', 'MÅNDAG', 'TISDAG', 'ONSDAG', 'TORSDAG', 'FREDAG', 'LÖRDAG']

function Program(item) {
    this.name = item.name;
    this.location = item.location;
    this.image = item.attachment.url;
    this.date = item.start_date;
    this.time = item.start_time;
    this.description = item.description;
};

const sort = (list) =>{
  let i = -1
  const result = []
  while(++i < list.length){
    const date = list[i].date
    const dateString = daysOfWeek[date.getDay()] + ' ' + date.getMonth() + '/' + date.getDate()
    const toPush = {'dateToString': dateString, programs: [list[i]]}
    while(i !== list.length - 1 && list[i].date.toDateString() === list[(i+1)].date.toDateString()){
      toPush.programs.push(list[++i])
    }
    result.push(toPush)
  }
  return result
}

function programClicked(args) {
	console.log(JSON.stringify(args.data));
	selectedProgram.value = args.data;
};

fetch("http://p17.jexpo.se/gadden/events/ws:2017?getAttributes=true")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
      if(r.startsAt){
        r.start_date = new Date(r.startsAt)
      }else{
        r.start_date = new Date()
      }
      try{
      const item = new Program(r)
      items.push(item);
      }
      catch(err){

      }
    })
    items.sort((x, y)=>{
      return x.date.getTime() < y.date.getTime()
    })
    console.log(JSON.stringify(items))
    items = sort(items)
    program.replaceAll(items);
    debug_log("data: " + JSON.stringify(program));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    dataProgram: program,
    selectedProgram: selectedProgram,
    programClicked: programClicked
};
