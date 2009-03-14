/*  Grafx2 - The Ultimate 256-color bitmap paint program

    Copyright 2007 Adrien Destugues
    Copyright 1996-2001 Sunset Design (Guillaume Dorme & Karl Maritaud)

    Grafx2 is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; version 2
    of the License.

    Grafx2 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grafx2; if not, see <http://www.gnu.org/licenses/> or
    write to the Free Software Foundation, Inc.,
    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

void Gestion_principale            (void);
void Tracer_cadre_de_bouton_du_menu(byte Numero,byte Enfonce);
void Desenclencher_bouton          (int Numero);
void Enclencher_bouton             (int Numero,byte Click);
void Annuler_les_effets            (void);
void Restaurer_les_effets          (void);
void Ouvrir_fenetre                (word Largeur,word Hauteur, char * Titre);
void Fermer_fenetre                (void);

void Ouvrir_popup                  (word Pos_X, word Pos_Y, word Largeur, word Hauteur);
void Fermer_popup                  (void);

void Fenetre_Dessiner_bouton_normal(word Pos_X,word Pos_Y,word Largeur,word Hauteur,
                                    char * Titre,byte Lettre_soulignee,byte Clickable);
void Fenetre_Enfoncer_bouton_normal(word Pos_X,word Pos_Y,word Largeur,word Hauteur);
void Fenetre_Desenfoncer_bouton_normal(word Pos_X,word Pos_Y,word Largeur,word Hauteur);
void Fenetre_Dessiner_bouton_palette(word Pos_X,word Pos_Y);

void Calculer_hauteur_curseur_jauge(T_Bouton_scroller * Enreg);
void Fenetre_Dessiner_jauge(T_Bouton_scroller * Enreg);
void Fenetre_Dessiner_bouton_scroller(T_Bouton_scroller * Enreg);

void Fenetre_Contenu_bouton_saisie(T_Bouton_special * Enreg, char * Contenu);
void Fenetre_Effacer_bouton_saisie(T_Bouton_special * Enreg);
void Fenetre_Dessiner_bouton_saisie(word Pos_X,word Pos_Y,word Largeur_en_caracteres);

T_Bouton_normal * Fenetre_Definir_bouton_normal(word Pos_X, word Pos_Y,
                                   word Largeur, word Hauteur,
                                   char * Titre,byte Lettre_soulignee,
                                   byte Clickable, word Raccourci);
T_Bouton_normal * Fenetre_Definir_bouton_repetable(word Pos_X, word Pos_Y,
                                   word Largeur, word Hauteur,
                                   char * Titre,byte Lettre_soulignee,
                                   byte Clickable, word Raccourci);

T_Bouton_palette * Fenetre_Definir_bouton_palette(word Pos_X, word Pos_Y);
void Fenetre_Effacer_tags(void);
void Tagger_intervalle_palette(byte Debut,byte Fin);

T_Bouton_scroller * Fenetre_Definir_bouton_scroller(word Pos_X, word Pos_Y,
                                     word Hauteur,
                                     word Nb_elements,
                                     word Nb_elements_visibles,
                                     word Position_initiale);
T_Bouton_special * Fenetre_Definir_bouton_special(word Pos_X,word Pos_Y,word Largeur,word Hauteur);
T_Bouton_special * Fenetre_Definir_bouton_saisie(word Pos_X,word Pos_Y,word Largeur_en_caracteres);
T_Bouton_dropdown * Fenetre_Definir_bouton_dropdown(word Pos_X,word Pos_Y,word Largeur,word Hauteur,word Largeur_choix,char *Libelle,byte Affiche_choix,byte Affiche_centre,byte Affiche_fleche,byte Bouton_actif);
void Fenetre_Dropdown_choix(T_Bouton_dropdown * Dropdown, word Numero, const char *Libelle);
void Fenetre_Dropdown_vider_choix(T_Bouton_dropdown * Dropdown);
byte Fenetre_click_dans_zone(short Debut_X,short Debut_Y,short Fin_X,short Fin_Y);
short Attendre_click_dans_palette(T_Bouton_palette * Enreg);
void Recuperer_couleur_derriere_fenetre(byte * Couleur, byte * Click);

short Fenetre_Bouton_clicke(void);
int Numero_bouton_sous_souris(void);
short Fenetre_Numero_bouton_clicke(void);
void Remappe_fond_fenetres(byte * Table_de_conversion, int Min_Y, int Max_Y);
void Pixel_fond(int Pos_X, int Pos_Y, byte Couleur);