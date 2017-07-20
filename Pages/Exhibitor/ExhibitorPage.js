var Observable = require("FuseJS/Observable");
var exhibitor = Observable();

function Exhibitor(item) {
    this.name = item.name;
};

fetch("http://dev.jexpo.se/dev/exhibitors/ws:2017?getAttributes=true")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
        items.push(new Exhibitor(r));
    });
    exhibitor.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    exhibitor: exhibitor
};
