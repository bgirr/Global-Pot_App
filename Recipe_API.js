
var Observable = require("FuseJS/Observable");
var data = Observable();
var recipe_URL = Observable();
var URL = Observable();
var recipe_number = Observable();

recipe_URL.value = 'https://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/'
recipe_number.value = '50';
URL.value = recipe_URL.value + recipe_number.value;

    fetch(URL.value)
    	.then(function(response) { return response.json(); })
        .then(function(responseObject) { data.value = responseObject; });
        debug_log('Richtiges JS!');


	
module.exports = {
	data: data,
	URL: URL
		}