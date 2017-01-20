var Observable = require("FuseJS/Observable");
var recipes = Observable();
var recipe_number = Observable();
var data = Observable();
var recipe_URL = Observable();
var URL = Observable();
var recipe_id = Observable();
var recipe_number = Observable();
var Zutat = Observable();

recipe_URL.value = 'https://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/';



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

	
	URL.value = recipe_URL.value + recipe_number.value;
	debug_log(URL.value);
    fetch(URL.value)
    	.then(function(response) { return response.json(); })
        .then(function(responseObject) { data.value = responseObject;});
        debug_log('Richtiges JS!');	
        

    fetch(URL.value)
    	.then(function(result){
    		result.json().then(function(rezept){
    			debug_log("Neues Rezept geladen!");

    		for (var i=0; i<30; i++) {
    			var Zutaten = rezept[i];
    			Zutat.add(item);
    			}
    		});
    	});


function overview_clicked(){


		router.goto("OverviewPage");

			}




function recipe_clicked(a){
		//debug_log(arg);
		console.log(JSON.stringify(a));
		debug_log(a.data.id);
		router.goto('RecipePage');

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