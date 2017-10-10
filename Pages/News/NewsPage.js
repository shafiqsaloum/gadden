var Observable = require("FuseJS/Observable");
var data = Observable();
var selectedArticle = Observable();
var selectedLecture = Observable();

function Article(item) {
    this.title = item.title;
    this.image = item.image.url;
    this.text = item.content;
};
// Collects data from cliked article
function articleClicked(args) {
	console.log(JSON.stringify(args.data));
	selectedArticle.value = args.data;
};
// Collects data from clicked lecture
function goToEvent(args) {
	console.log(JSON.stringify(args.data));
	selectedProgram.value = args.data;
};

fetch("https://p17.jexpo.se/gadden/forms/ws:news?getAttributes=1")
.then(function(response) {
    var res = undefined
    res = JSON.parse(JSON.stringify(response))
    res = JSON.parse(res._bodyInit)
    var items = [];
    res.results.forEach(function(r) {
        items.push(new Article(r));
    });
    data.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    dataSource: data,
    articleClicked: articleClicked,
    selectedArticle: selectedArticle,
    goToEvent: goToEvent,
    selectedLecture: selectedLecture
};
