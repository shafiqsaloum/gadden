var Observable = require("FuseJS/Observable");
var data = Observable();

function IceBreaker(item) {
    this.IceBreaker = item.IceBreaker;
};

var selectedIceBreaker = Observable();

function selectedIceBreakers(args) {
	console.log(JSON.stringify(args.data));
	selectedIceBreakers.value = args.data;
};

fetch("https://dev.jexpo.se/dev/forms/ws:icebreakers?getAttributes=1")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
        items.push(new IceBreaker(r));
    });
    data.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    IceBreakers: data,
    selectedIceBreaker: selectedIceBreaker
};
