var Observable = require("FuseJS/Observable");
var goodiebag = Observable();
var sponsors = Observable();

function Goodiebag(item) {
    this.company = item.company;
    this.article = item.article;
    this.content = item.content;
    this.code = item.code;
    this.color = item.color;
};

function Sponsors(item) {
    // this.logo = item.profile.logotype.thumbs.large;
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

fetch("http://dev.jexpo.se/dev/sponsors/ws:2017?getAttributes=true")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
        items.push(new Sponsors(r));
    });
    sponsors.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    dataGoodiebag: goodiebag,
    dataSponsors: sponsors
};
