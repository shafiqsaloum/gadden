var Observable = require("FuseJS/Observable");
var goodiebag = Observable();

function Goodiebag(item) {
    this.company = item.company;
    this.article = item.article;
    this.content = item.content;
    this.code = item.code;
};

fetch("https://dev.jexpo.se/dev/forms/coupons?getAttributes=1")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
        items.push(new Goodiebag(r));
    });
    goodiebag.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    dataGoodiebag: goodiebag,
};
