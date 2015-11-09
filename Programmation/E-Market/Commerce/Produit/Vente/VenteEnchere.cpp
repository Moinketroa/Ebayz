#include "VenteEnchere.h"

VenteEnchere::VenteEnchere(float prixDep,
                           char* dateStart,
                           char* dateEnd)
                            : prixDepart(prixDep),
                              dernierPrixPropose(0.),
                              dateDebut(dateStart),
                              dateFin(dateEnd)
{}


