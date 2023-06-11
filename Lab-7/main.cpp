#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


struct salesPersonRec {
  int ID;
  double Quater[4];
  double totalSale;
};


void initialize(ifstream& indata, salesPersonRec list[], int listSize);
void getData(ifstream& infile, salesPersonRec list[], int listSize);
void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[]);
void totalSaleByPerson(salesPersonRec list[], int listSize);
void printReport(ofstream& outfile, salesPersonRec list[], int listSize, double saleByQuarter[]);
void maxSaleByPerson(ofstream& outData, salesPersonRec list[], int listSize);
void maxSaleByQuarter(ofstream& outData, double saleByQuarter[]);

int main(){

    ifstream salesids;
    ifstream salesdata;
    ofstream annualreport;

    string idfile,datafile,outputfile;

    salesPersonRec salesPersonList[6];
    double totalSalesByQuarter[4]; 

    cout << "Enter the file with the sales ID's: \n";

    cin >> idfile;

    salesids.open(idfile);

    if(salesids.fail()) {
        cout << "File doesn't exist\n";
        return 0;
    }

    initialize(salesids, salesPersonList, 6);

    salesids.close();

    cin.clear();

    cout << "Enter Sales Data file: \n";

    cin >> datafile;

    salesdata.open(datafile);

    if(salesdata.fail()){
        cout << "File doesn't exist\n";
        return 0;
    }

    cout << "Enter the Output File: \n";
    cin >> outputfile;

    annualreport.open(outputfile);

    cout.precision(2);

    getData(salesdata, salesPersonList, 6);

    saleByQuarter(salesPersonList, 6, totalSalesByQuarter);

    totalSaleByPerson(salesPersonList, 6);

    printReport(annualreport, salesPersonList, 6, totalSalesByQuarter);

    salesdata.close();
    annualreport.close();
  
}

void initialize(ifstream& indata, salesPersonRec list[], int listSize){
    
    int counter = 0;

    //indata.open("salesmanid.txt");

    while(indata && !indata.eof()){
        
        indata >> list[counter].ID;

        list[counter].totalSale = 0;
        
        for(int i = 0; i < 4; i++){
            list[counter].Quater[i] = 0;
        }
        
       counter++;
    }
}

void getData(ifstream& infile, salesPersonRec list[], int listSize) {

    //infile.open("salesdata.txt");

    int current_id, month, quarter;
    double current_amount;

    while(infile && !infile.eof()) {
        infile >> current_id >> month >> current_amount;

        // determine the quarter 
        if(month >= 1 && month <= 3){
            quarter = 0;
        } else if(month >= 4  && month <= 6){
            quarter = 1;
        } else if(month >= 7 && month <= 9){
            quarter = 2;
        } else {
            quarter = 3;
        }
        
        for(int i = 0; i < 6; i++){
            // find by id
            if(current_id == list[i].ID){
                // get current quarter and add current amount
                list[i].Quater[quarter] += current_amount;
            }
        }
    }

   
}

void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[]){
    for(int i = 0; i < listSize; i++){
        for(int j = 0; j < 4; j++){
            totalByQuarter[j] += list[i].Quater[j];
        }
    }
}

void totalSaleByPerson(salesPersonRec list[], int listSize) {
      // calculate total sales by salesperson
    for(int i = 0; i < listSize; i++) {
        double total;

        for(int j = 0; j < 4; j++){
            total += list[i].Quater[j];

            
        }

        list[i].totalSale = total;
    }
}

void printReport(ofstream& outfile, salesPersonRec list[], int listSize, double saleByQuarter[]){

    int spacing = 7;

    cout << "------------- Annual Sales Report --------------- \n\n";

    outfile << "------------- Annual Sales Report --------------- \n\n";

    cout << " ID       QT1        QT2        QT3         QT4     Total \n\n";

    outfile << " ID       QT1        QT2        QT3         QT4     Total \n\n";

    for(int i = 0; i < listSize; i++){
        cout << list[i].ID << "  ";
        outfile << list[i].ID << "  ";

        for(int j = 0; j < 4; j++){
            cout << fixed;
            cout << setw(spacing + j + 1) << list[i].Quater[j] << " ";
            outfile << setw(spacing + j + 1) << list[i].Quater[j] << " ";
        }
        cout << fixed;
        cout << setw(9) <<list[i].totalSale;
        outfile << setw(9) <<list[i].totalSale;
        cout << "\n";
        outfile << "\n";
    }

    cout << "Total ";
    outfile << "Total ";

    for(int i = 0; i < 4; i++){
        cout << fixed;
        cout << " " << setw(8 + i) << saleByQuarter[i];  
        outfile << " " << setw(8 + i) << saleByQuarter[i];        
    };

    cout << "\n";

    maxSaleByPerson(outfile, list, 6);
    maxSaleByQuarter(outfile, saleByQuarter);
};

void maxSaleByPerson(ofstream& outData, salesPersonRec list[], int listSize) {
    int largestTotal = -1;
    int largestId;

    for(int i = 0; i < listSize; i++){
        if(list[i].totalSale > largestTotal){
            largestTotal = list[i].totalSale;
            largestId = list[i].ID;
        }
    };

    cout << fixed;
    cout << "\nMax Sale by Sales Person: ID = " << largestId << ", Amount = $" << largestTotal; 
    outData << "\nMax Sale by Sales Person: ID = " << largestId << ", Amount = $" << largestTotal; 
}

void maxSaleByQuarter(ofstream& outData, double saleByQuarter[]){
    int largestTotal = -1;
    int largestQuarter;

    for(int i = 0; i < 4; i++){
        if(saleByQuarter[i] > largestTotal){
            largestTotal = saleByQuarter[i];
            largestQuarter = i + 1;
        }
        
    }

    cout << fixed;
    cout << "\nMax Sale by Quarter: Quarter = " << largestQuarter << ", Amount = $" << largestTotal << "\n";
    outData << "\nMax Sale by Quarter: Quarter = " << largestQuarter << ", Amount = $" << largestTotal << "\n";

}

