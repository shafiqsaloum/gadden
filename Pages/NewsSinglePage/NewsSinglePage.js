var Observable = require("FuseJS/Observable");
var singleNews = Observable();

function SingleDetails(item) {
    this.title = item.title;
    this.image = item.attachment.thumbs.large;
    this.text = item.text;
};

fetch("https://p17.jexpo.se/gadden/forms/news?getAttributes=1")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
      console.log('NEWSSSSSssSSS')
      console.log(JSON.stringify(r))
        items.push(new SingleDetails(r));
    });
    singleNews.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    dataNewsSingle: data
};
