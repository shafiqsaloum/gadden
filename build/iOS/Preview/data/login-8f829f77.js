var Observable = require('FuseJS/Observable');

var url = 'https://p17.jexpo.se/gadden/auth';

var name = Observable();
var email = Observable();

function signup() {

    var requestObject = {
        'email': email.value,
        'name': name.value,
        'grant_type': 'email',
        'expires': false,
    };

    var status = 0;
    var response_ok = false;
    var x = '';
    var y = '';

    fetch(url, {
        method: 'POST',
        headers: {
            'Accept': '*/*',
            'Content-type': 'application/json',
        },
        dataType: 'json',
        body: JSON.stringify(requestObject),
    })
        .then(function(response) {
          console.log(JSON.stringify(response))
            status = response.status; // Get the HTTP status code
            response_ok = response.ok; // Is response.status in the 200-range?
            return response.json(); // This returns a promise
        })
        .then(function(responseObject) {
            console.log('Success');
            x = JSON.stringify(responseObject);
            y = JSON.stringify(requestObject);
            console.log('--___________£_£_£_£_£_£_£_££_£_£_£_£_£_£_£_£_£_££_£_£_£_£_£_£_£_£')
            console.log(x);
            console.log('__£__£_£_$_£:EEDDSDSSDSDDDDSEDSEDSEDSFDMKNKBVHJGBNBD HJGHJSBK')
            console.log(y)
            name.replaceAll([y.name])
            email.replaceAll([y.email])
            for (var key in responseObject) {
                console.log(key + ' : ' + responseObject[key]);
            }
        })
        .catch(function(err) {
            console.log('---Error');
            console.log(JSON.stringify(err))
            console.error(err);
        });
}

module.exports = {
    email: email,
    name: name,
    signup: signup,
};
