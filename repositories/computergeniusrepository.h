#ifndef COMPUTERGENIUSREPOSITORY_H
#define COMPUTERGENIUSREPOSITORY_H

#include "repositories/computerrepository.h"
#include "repositories/geniusrepository.h"
#include "models/computermodel.h"
#include "models/geniusmodel.h"

#include <vector>

using namespace std;

class ComputerGeniusRepository
{
public:
    ComputerGeniusRepository();

    vector<ComputerModel> getGeniusesComputers(GeniusModel model);
    vector<GeniusModel> getComputerGeniuses(ComputerModel model);
private:
    QSqlDatabase _db;
    vector<ComputerModel> extractComputerQueryToVector(QSqlQuery query) const;
    vector<GeniusModel> extractGeniusQueryToVector(QSqlQuery query) const;
};

#endif // COMPUTERGENIUSREPOSITORY_H