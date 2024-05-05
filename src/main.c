#include "../include/path_countries.h"

t_pays	afghanistan, afrique_du_sud, albanie, algerie, allemagne, andorre,
	angola, arabie_saoudite, argentine, armenie, autriche, azerbaidjan, 
	bahrein, bangladesh, belgique, benin, bhoutan, bielorussie, birmanie,
	bolivie, bosnie, botswana, bresil, brunei, bulgarie, burkina_faso,
	burundi, cambodge, cameroun, canada, chili, chine, colombie,
	republique_du_congo, coree_du_nord, coree_du_sud, costa_rica,
	cote_ivoire, croatie, danemark, djibouti, egypte, emirats_arabes_unis,
	equateur, eythree, espagne, estonie, eswatini, etats_unis, ethiopie,
	finlande, france, gabon, gambie, georgie, ghana, grece, guatemala,
	guinee, guinee_equatoriale, guinee_bissau, guyana, honduras, hongrie,
	inde, indonesie, irak, iran, palestine, italie, jordanie, kazakhstan,
	kenya, kirghizistan, kosovo, koweit, laos, lesotho, lettonie, liban,
	liberia, libye, liechtenstein, lituanie, luxembourg, macedoine,
	malaisie, malawi, mali, maroc, mauritanie, mexique, moldavie, monaco,
	mongolie, montenegro, mozambique, namibie, nepal, nicaragua, niger,
	nigeria, norvege, oman, ouganda, ouzbekistan, pakistan, panama,
	papouasie, paraguay, pays_bas, perou, pologne, portugal, qatar,
	republique_centrafrique, republique_democratique_du_congo, tchequie,
	roumanie, russie, rwanda, saint_marin, salvador, senegal, serbie,
	sierra_leone, singapour, slovaquie, slovenie, somalie, soudan,
	soudan_du_sud, suede, suisse, suriname, syrie, tadjikistan, tanzanie,
	tchad, thailande, togo, tunisie, turkmenistan, turquie, ukraine,
	uruguay, vatican, venezuela, vietnam, yemen, zambie, zimbabwe;

void	init_pays(void)
{
	all_zero(&afghanistan);
	afghanistan.noms[0] = "AFGHANISTAN";
	afghanistan.frontieres[0] = &turkmenistan;
	afghanistan.frontieres[1] = &tadjikistan;
	afghanistan.frontieres[2] = &pakistan;
	afghanistan.frontieres[3] = &iran;
	afghanistan.frontieres[4] = &chine;
	afghanistan.frontieres[5] = &ouzbekistan;
	all_zero(&afrique_du_sud);
	afrique_du_sud.noms[0] = "AFRIQUE DU SUD";
	afrique_du_sud.frontieres[0] = &namibie;
	afrique_du_sud.frontieres[1] = &botswana;
	afrique_du_sud.frontieres[2] = &zimbabwe;
	afrique_du_sud.frontieres[3] = &mozambique;
	afrique_du_sud.frontieres[4] = &lesotho;
	afrique_du_sud.frontieres[5] = &eswatini;
	all_zero(&albanie);
	albanie.noms[0] = "ALBANIE";
	albanie.frontieres[0] = &montenegro;
	albanie.frontieres[1] = &kosovo;
	albanie.frontieres[2] = &macedoine;
	albanie.frontieres[3] = &grece;
	all_zero(&algerie);
	algerie.noms[0] = "ALGERIE";
	algerie.frontieres[0] = &maroc;
	algerie.frontieres[1] = &mauritanie;
	algerie.frontieres[2] = &mali;
	algerie.frontieres[3] = &niger;
	algerie.frontieres[4] = &libye;
	algerie.frontieres[5] = &tunisie;
	all_zero(&allemagne);
	allemagne.noms[0] = "ALLEMAGNE";
	allemagne.frontieres[0] = &pays_bas;
	allemagne.frontieres[1] = &belgique;
	allemagne.frontieres[2] = &luxembourg;
	allemagne.frontieres[3] = &france;
	allemagne.frontieres[4] = &suisse;
	allemagne.frontieres[5] = &autriche;
	allemagne.frontieres[6] = &tchequie;
	allemagne.frontieres[7] = &pologne;
	allemagne.frontieres[8] = &danemark;
	all_zero(&andorre);
	andorre.noms[0] = "ANDORRE";
	andorre.frontieres[0] = &france;
	andorre.frontieres[1] = &espagne;
	all_zero(&angola);
	angola.noms[0] = "ANGOLA";
	angola.frontieres[0] = &republique_democratique_du_congo;
	angola.frontieres[1] = &zambie;
	angola.frontieres[2] = &namibie;
	all_zero(&arabie_saoudite);
	arabie_saoudite.noms[0] = "ARABIE SAOUDITE";
	arabie_saoudite.frontieres[0] = &jordanie;
	arabie_saoudite.frontieres[1] = &irak;
	arabie_saoudite.frontieres[2] = &bahrein;
	arabie_saoudite.frontieres[3] = &koweit;
	arabie_saoudite.frontieres[4] = &qatar;
	arabie_saoudite.frontieres[5] = &emirats_arabes_unis;
	arabie_saoudite.frontieres[6] = &oman;
	arabie_saoudite.frontieres[7] = &yemen;
	all_zero(&argentine);
	argentine.noms[0] = "ARGENTINE";
	argentine.frontieres[0] = &chili;
	argentine.frontieres[1] = &bolivie;
	argentine.frontieres[2] = &paraguay;
	argentine.frontieres[3] = &uruguay;
	argentine.frontieres[4] = &bresil;
	all_zero(&armenie);
	armenie.noms[0] = "ARMENIE";
	armenie.frontieres[0] = &turquie;
	armenie.frontieres[1] = &georgie;
	armenie.frontieres[2] = &iran;
	armenie.frontieres[3] = &azerbaidjan;
	all_zero(&autriche);
	autriche.noms[0] = "AUTRICHE";
	autriche.frontieres[0] = &allemagne;
	autriche.frontieres[1] = &tchequie;
	autriche.frontieres[2] = &slovaquie;
	autriche.frontieres[3] = &hongrie;
	autriche.frontieres[4] = &slovenie;
	autriche.frontieres[5] = &italie;
	autriche.frontieres[6] = &suisse;
	all_zero(&azerbaidjan);
	azerbaidjan.noms[0] = "AZERBAIDJAN";
	azerbaidjan.frontieres[0] = &armenie;
	azerbaidjan.frontieres[1] = &iran;
	azerbaidjan.frontieres[2] = &russie;
	azerbaidjan.frontieres[3] = &georgie;
	all_zero(&bahrein);
	bahrein.noms[0] = "BAHREIN";
	bahrein.frontieres[0] = &arabie_saoudite;
	all_zero(&bangladesh);
	bangladesh.noms[0] = "BANGLADESH";
	bangladesh.frontieres[0] = &inde;
	bangladesh.frontieres[1] = &birmanie;
	all_zero(&belgique);
	belgique.noms[0] = "BELGIQUE";
	belgique.frontieres[0] = &pays_bas;
	belgique.frontieres[1] = &france;
	belgique.frontieres[2] = &allemagne;
	belgique.frontieres[3] = &luxembourg;
	all_zero(&benin);
	benin.noms[0] = "BENIN";
	benin.frontieres[0] = &togo;
	benin.frontieres[1] = &burkina_faso;
	benin.frontieres[2] = &niger;
	benin.frontieres[3] = &nigeria;
	all_zero(&bhoutan);
	bhoutan.noms[0] = "BHOUTAN";
	bhoutan.frontieres[0] = &inde;
	bhoutan.frontieres[1] = &chine;
	all_zero(&bielorussie);
	bielorussie.noms[0] = "BIELORUSSIE";
	bielorussie.noms[1] = "BELARUS";
	bielorussie.frontieres[0] = &pologne;
	bielorussie.frontieres[1] = &lituanie;
	bielorussie.frontieres[2] = &lettonie;
	bielorussie.frontieres[3] = &russie;
	bielorussie.frontieres[4] = &ukraine;
	all_zero(&birmanie);
	birmanie.noms[0] = "BIRMANIE";
	birmanie.noms[1] = "MYANMAR";
	birmanie.frontieres[0] = &inde;
	birmanie.frontieres[1] = &chine;
	birmanie.frontieres[2] = &laos;
	birmanie.frontieres[3] = &thailande;
	birmanie.frontieres[4] = &bangladesh;
	all_zero(&bolivie);
	bolivie.noms[0] = "BOLIVIE";
	bolivie.frontieres[0] = &perou;
	bolivie.frontieres[1] = &bresil;
	bolivie.frontieres[2] = &chili;
	bolivie.frontieres[3] = &argentine;
	bolivie.frontieres[4] = &paraguay;
	all_zero(&bosnie);
	bosnie.noms[0] = "BOSNIE HERZEGOVINE";
	bosnie.noms[1] = "BOSNIE";
	bosnie.frontieres[0] = &croatie,
	bosnie.frontieres[1] = &serbie;
	bosnie.frontieres[2] = &montenegro;
	all_zero(&botswana);
	botswana.noms[0] = "BOTSWANA";
	botswana.frontieres[0] = &namibie;
	botswana.frontieres[1] = &afrique_du_sud;
	botswana.frontieres[2] = &zimbabwe;
	botswana.frontieres[3] = &zambie;
	all_zero(&bresil);
	bresil.noms[0] = "BRESIL";
	bresil.frontieres[0] = &france;
	bresil.frontieres[1] = &suriname;
	bresil.frontieres[2] = &guyana;
	bresil.frontieres[3] = &venezuela;
	bresil.frontieres[4] = &colombie;
	bresil.frontieres[5] = &perou;
	bresil.frontieres[6] = &bolivie;
	bresil.frontieres[7] = &paraguay;
	bresil.frontieres[8] = &argentine;
	bresil.frontieres[9] = &uruguay;
	all_zero(&brunei);
	brunei.noms[0] = "BRUNEI";
	brunei.noms[1] = "BRUNEI DARUSSALAM";
	brunei.frontieres[0] = &malaisie;
	all_zero(&bulgarie);
	bulgarie.noms[0] = "BULGARIE";
	bulgarie.frontieres[0] = &serbie;
	bulgarie.frontieres[1] = &roumanie;
	bulgarie.frontieres[2] = &macedoine;
	bulgarie.frontieres[3] = &grece;
	bulgarie.frontieres[4] = &turquie;
	all_zero(&burkina_faso);
	burkina_faso.noms[0] = "BURKINA FASO";
	burkina_faso.frontieres[0] = &mali;
	burkina_faso.frontieres[1] = &cote_ivoire;
	burkina_faso.frontieres[2] = &ghana;
	burkina_faso.frontieres[3] = &togo;
	burkina_faso.frontieres[4] = &benin;
	burkina_faso.frontieres[5] = &niger;
	all_zero(&burundi);
	burundi.noms[0] = "BURUNDI";
	burundi.frontieres[0] = &rwanda;
	burundi.frontieres[1] = &republique_democratique_du_congo;
	burundi.frontieres[2] = &tanzanie;
	all_zero(&cambodge);
	cambodge.noms[0] = "CAMBODGE";
	cambodge.frontieres[0] = &thailande;
	cambodge.frontieres[1] = &laos;
	cambodge.frontieres[2] = &vietnam;
	all_zero(&cameroun);
	cameroun.noms[0] = "CAMEROUN";
	cameroun.frontieres[0] = &nigeria;
	cameroun.frontieres[1] = &tchad;
	cameroun.frontieres[2] = &republique_centrafrique;
	cameroun.frontieres[3] = &republique_du_congo;
	cameroun.frontieres[4] = &gabon;
	cameroun.frontieres[5] = &guinee_equatoriale;
	all_zero(&canada);
	canada.noms[0] = "CANADA";
	canada.frontieres[0] = &etats_unis;
	all_zero(&chili);
	chili.noms[0] = "CHILI";
	chili.frontieres[0] = &perou;
	chili.frontieres[1] = &bolivie;
	chili.frontieres[2] = &argentine;
	all_zero(&chine);
	chine.noms[0] = "CHINE";
	chine.frontieres[0] = &russie;
	chine.frontieres[1] = &mongolie;
	chine.frontieres[2] = &kazakhstan;
	chine.frontieres[3] = &kirghizistan;
	chine.frontieres[4] = &tadjikistan;
	chine.frontieres[5] = &afghanistan;
	chine.frontieres[6] = &pakistan;
	chine.frontieres[7] = &inde;
	chine.frontieres[8] = &nepal;
	chine.frontieres[9] = &bhoutan;
	chine.frontieres[10] = &birmanie;
	chine.frontieres[11] = &laos;
	chine.frontieres[12] = &vietnam;
	chine.frontieres[13] = &coree_du_nord;
	all_zero(&colombie);
	colombie.noms[0] = "COLOMBIE";
	colombie.frontieres[0] = &panama;
	colombie.frontieres[1] = &equateur;
	colombie.frontieres[2] = &perou;
	colombie.frontieres[3] = &bresil;
	colombie.frontieres[4] = &venezuela;
	all_zero(&republique_du_congo);
	republique_du_congo.noms[0] = "REPUBLIQUE DU CONGO";
	republique_du_congo.noms[1] = "CONGO BRAZZAVILLE";
	republique_du_congo.frontieres[0] = &gabon;
	republique_du_congo.frontieres[1] = &cameroun;
	republique_du_congo.frontieres[2] = &republique_centrafrique;
	republique_du_congo.frontieres[3] = &republique_democratique_du_congo;
	republique_du_congo.frontieres[4] = &angola;
	all_zero(&coree_du_nord);
	coree_du_nord.noms[0] = "COREE DU NORD";
	coree_du_nord.frontieres[0] = &coree_du_sud;
	coree_du_nord.frontieres[1] = &chine;
	all_zero(&coree_du_sud);
	coree_du_sud.noms[0] = "COREE DU SUD";
	coree_du_sud.frontieres[0] = &coree_du_nord;
	all_zero(&costa_rica);
	costa_rica.noms[0] = "COSTA RICA";
	costa_rica.frontieres[0] = &nicaragua;
	costa_rica.frontieres[1] = &panama;
	all_zero(&cote_ivoire);
	cote_ivoire.noms[0] = "COTE D'IVOIRE";
	cote_ivoire.frontieres[0] = &liberia;
	cote_ivoire.frontieres[1] = &guinee;
	cote_ivoire.frontieres[2] = &mali;
	cote_ivoire.frontieres[3] = &burkina_faso;
	cote_ivoire.frontieres[4] = &ghana;
	all_zero(&croatie);
	croatie.noms[0] = "CROATIE";
	croatie.frontieres[0] = &slovenie;
	croatie.frontieres[1] = &bosnie;
	croatie.frontieres[2] = &serbie;
	croatie.frontieres[3] = &hongrie;
}

int	main(void)
{
	char	*depart;
	char	*arrivee;

	srand(time(NULL));
	random_itineraire(&depart, &arrivee);
	init_pays();
	return (0);
}