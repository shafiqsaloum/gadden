var Observable = require("FuseJS/Observable");
var data = Observable();

function SingleDetails(item) {
    this.title = item.title;
    this.image = item.image.url;
    this.text = item.text;
};

fetch("https://dev.jexpo.se/dev/forms/news?getAttributes=1")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
        items.push(new SingleDetails(r));
    });
    data.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    dataSource: data
};
