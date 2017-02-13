#pragma once


int fScan(void) {

	int dpi = 0, farbtiefe = 0;
	float breite = 0, hoehe = 0;
	double groesse = 0;

	//Überschrift Rechner
	printf("--------------Scan Berechnung-------------------\n");

	printf("Bitte geben sie Ausgabe in DPI an\nDPI: ");
	scanf("%i", &dpi);

	printf("Bitte geben sie Farbtiefe in Bit an\nFarbtiefe: ");
	scanf("%i", &farbtiefe);

	printf("\nBitte geben sie die Breite cm ein\nBreite:");
	scanf("%f", &breite);

	printf("\nBitte geben sie die H\x94\he cm ein\nH\x94he: ");
	scanf("%f", &hoehe);

	printf("----------------Ausgabe------------------------\n");


	//------------------Berechnung---------------------
	groesse = ((((breite * 72) / 2.54)*(hoehe * 72) / 2.54) * farbtiefe) / 8 / 1024 / 1024;

	printf("Die zu erwartende Dateigr\x94\xE1\e entspricht %.4lf MiB\n", groesse);


	return 0;
}


int fKinder(void) {


	int kinder = 0, eier = 0, rest = 0, erhalten = 0;

	printf("Willkommen zum Kindergeburtstag\n");


	printf("Bitte geben sie die Anzahl der Kinder ein: ");

	scanf("%i", &kinder);

	printf("Wie viele \x9a\x62\erraschungseier hast du, ich hoffe mehr als Kinder\nsonst gibt es Streit ");

	scanf("%i", &eier);

	erhalten = eier / kinder;

	rest = eier%kinder;

	printf("Es wurden %i Kinder eingeladen und jedes hat %i \x9a\x62\erraschungseier erhalten\n"
		"Es blieben noch %i \x81\x62rig\n", kinder, erhalten, rest);

	return 0;
}