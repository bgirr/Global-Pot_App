var Observable = require("FuseJS/Observable");
var recipes = Observable();
var data = Observable();
var recipe_URL = Observable();
var URL = Observable();
var recipe_number = Observable();
var Rezept = Observable();
var data = Observable();
var Overview = Observable('Visible');
var RecipeView = Observable('Collapsed');



recipe_URL.value = 'https://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/';

function createURL(BasicURL, recipeID){
	var myURL = BasicURL + recipeID;
	return myURL;
};
			

fetch("http://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/")
	.then(function(result) {
		if (result.status !== 200) {
			debug_log(result.status);
		}
	result.json().then(function(data) {
	debug_log("Übersicht ist da!");
	var laenge = data.length;
	for (var i=0; i<laenge; i++) {
	var item = data[i];
	recipes.add(item);

		}
	});
});





//function getRecipe(recipeURL) {	


//  fetch('https://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/51')
//                        .then(function(response) { return response.json(); })
//                        .then(function(responseObject) { 
//                        	recipeName.replaceAll(responseObject.recipeName); 
//                        	debug_log(responseObject.recipeName);
       
//                        });
//							debug_log(recipeName);
//}
  //  var p2 = fetch('https://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/50');
	//	    	 p2.then(function(response) {
	//	    		response.json().then (function (data) {
	//		    		Rezept = data;
			    		//return myrecipe;

	//	    		})
		    		
	//			}, function(reason){
	//				debug_log("Fehler");
	//			});
  

//}


    		//result.json(); })
       // .then(function(resultJson) {
        	//myrecipe = responseObject;
        	//Beeni.value = resultJson;
        	//debug_log(Beeni.value);
        	//Beeni.value = resultJson;
        	//debug_log(Beeni.id);
        	//console.log(JSON.stringify(Beeni));
        	//Storage.write(Kochen.json, JSON.stringify(myrecipe));
       // return Beeni;
       // });
        //debug_log("Hier bin ich")
       // debug_log(Beeni.value);
        //console.log(JSON.stringify(Beeni));
        //Storage.write(SAVENAME, JSON.stringify(data));
        //debug_log(myrecipe.recipeName);
        //console.log(JSON.stringify(Beeni));
        
    

    //fetch(recipeURL)
    	//.then(function(result){
    		//result.json().then(function(rezept){
    		//debug_log("Neues Rezept geladen!");
    		//console.log(JSON.stringify(rezept));

    		//for (var i=0; i<30; i++) {
    		//var Zutaten = rezept[i];
    		//ingredient.add(item);
    		//	}
    		//console.log(JSON.stringify(Zutaten));
    		//console.log(JSON.stringify(ingredient));
    		//});
    	//});


function overview_clicked(){
		//RecipeView.value = 'Collapsed';
		//Overview.value = 'Visible';
		router.goto("OverviewPage");

			}




function recipe_clicked(a){
		//debug_log(arg);
		//console.log(JSON.stringify(a));
		//URL.value = createURL(recipe_URL.value, a.data.id);
		//recipe_number.value = a.data.id;
		var recipe = a.data;
		//var recipe_Name = a.data.recipeName;
		//Overview.value = 'Collapsed';
		//RecipeView.value = 'Visible';
		//debug_log(recipe_number.value);
		//Rezept.value = getRecipe(URL.value);
		//Rezept.value = a.data;
		//return recipe_number;
		//router.push("RecipePage", { recipe_number: a.data.id });
		router.push("RecipePage", { recipe: recipe });
		//router.goto('RecipePage');
		//return Rezept.value;
			}

//console.log(JSON.stringify(Rezept.value));
//console.log(JSON.stringify(Rezeptdetails));				


		module.exports = {
		recipes: recipes,
		data: data,
		Rezept: Rezept,
		Overview: Overview,
		recipe_number: recipe_number,
		recipe_clicked: recipe_clicked,
		overview_clicked: overview_clicked,
		}