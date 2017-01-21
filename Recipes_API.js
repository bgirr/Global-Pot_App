var Observable = require("FuseJS/Observable");
var Storage = require("FuseJS/Storage");
var recipes = Observable();
var recipe_number = Observable();
var data = Observable();
var recipe_URL = Observable();
var URL = Observable();
var recipe_number = Observable();
var Zutat = Observable();
var ingredient = Observable();
var SAVENAME = "localStorage.json";
var data = Observable();

recipe_URL.value = 'https://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/';

function createURL(BasicURL, recipeID){
	var myURL = BasicURL + recipeID;
	return myURL;
}
			

fetch("http://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/")
	.then(function(result) {
	result.json().then(function(data) {
	debug_log("Übersicht ist da!");

	for (var i=0; i< 30; i++) {
	var item = data[i];
	recipes.add(item);
		}
	});
});


function getRecipe(recipeURL) {	
	debug_log(recipeURL);
	var myrecipe;

	fetch(recipeURL)
	.then(function(result) {
		result.json().then(function(data) {
			debug_log("Rezept geladen!");
		});
	});

    fetch(recipeURL)
    	.then(function(response) { return response.json(); })
        .then(function(responseObject) {myrecipe.value = responseObject;});
        debug_log('Richtiges JS!');	
        console.log(JSON.stringify(myrecipe));
        //Storage.write(SAVENAME, JSON.stringify(data));

    

    fetch(recipeURL)
    	.then(function(result){
    		result.json().then(function(rezept){
    			debug_log("Neues Rezept geladen!");

    		for (var i=0; i<30; i++) {
    			var Zutaten = rezept[i];
    			ingredient.add(item);
    			}
    		});
    	});
    debug_log(ingredient.value);
    return myrecipe;
}

function overview_clicked(){


		router.goto("OverviewPage");

			}




function recipe_clicked(a){
		//debug_log(arg);
		//console.log(JSON.stringify(a));
		URL.value = createURL(recipe_URL.value, a.data.id);
		data.value = getRecipe(URL.value);
		console.log(JSON.stringify(data));
		router.goto('RecipePage');

		return data;
			}

				


		module.exports = {
		recipes: recipes,
		data: data,
		recipe_number: recipe_number,
		recipe_clicked: recipe_clicked,
		overview_clicked: overview_clicked,
		Zutat: Zutat,
		items:["A","B","C"],
		foo:function(e){
			debug_log(e.data);

		}
		
		}