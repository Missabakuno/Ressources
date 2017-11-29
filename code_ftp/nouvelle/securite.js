
	function passWord() {

	var testV = 1;
	var pass1 = prompt('Entrez le mot de passe',' ');
	
	while (testV < 3) {

		if (!pass1) 
		history.go(-1);
		if (pass1.toLowerCase() == "redrummurder") {

			alert('Mot de passe correct');
			window.open('http://anaisboitte.student.artsaucarre.be/nouvelle/nouvelle/index.html');
			break;
		} 

	testV+=1;
	var pass1 = 
	prompt('Accés refusé - Mot de passe incorrect','Password');

	}

if (pass1.toLowerCase()!="password" & testV ==3) 
	history.go(-1);
	return " ";
} 

