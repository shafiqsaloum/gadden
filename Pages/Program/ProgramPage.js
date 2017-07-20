var Observable = require("FuseJS/Observable");
var program = Observable();

function Program(item) {
    this.name = item.name;
    this.location = item.location;
    this.image = item.attachment.url;
    this.date = item.start_date;
    this.time = item.start_time;
    this.description = item.description;
};

var selectedProgram = Observable();

function programClicked(args) {
	console.log(JSON.stringify(args.data));
	selectedProgram.value = args.data;
};

fetch("http://dev.jexpo.se/dev/events/ws:2017?getAttributes=true")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
        items.push(new Program(r));
    });
    program.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    dataProgram: program,
    selectedProgram: selectedProgram,
    programClicked: programClicked
};
