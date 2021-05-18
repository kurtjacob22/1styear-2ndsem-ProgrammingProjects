#include<iostream>
using namespace std;

struct studRec{
	int IDnum;
	string fname;
	string lname;
	int GWA;
	bool isDel;
};

int getOpt(){ //--- show menu, get option
	cout<<"\n-----MENU OPTIONS------"<<endl;
	cout<<"[0] Exit this program"<<endl;
	cout<<"[1] Add New Record Entry"<<endl;
	cout<<"[2] Edit Existing Record"<<endl;
	cout<<"[3] Del Existing Record"<<endl;
	cout<<"[4] Display One Record"<<endl;
	cout<<"[5] Display AllRecords"<<endl;
	int opt;
	do{
		cout<<"CHOOSE(0..5): "; cin>>opt;
	}while(!( 0<=opt && opt<=5));
	return opt;
}

void showRec(studRec rec[], int ctr){	// display rec given IDnum
	int ID; 
	bool found=false;
	cout<<endl<<"ID: "; cin>>ID;
	cout<<endl;
	for(int j=0; j<ctr; j++){
		if(ID==rec[j].IDnum && !rec[j].isDel) {
			found=true;
			cout<<rec[j].IDnum<<"\t";
			cout<<rec[j].fname<<"\t";
			cout<<rec[j].lname<<"\t";
			cout<<rec[j].GWA<<"\n";
		}
	}
	if(!found) cout<<"No such ID#"<<endl;
}

void showAll(studRec rec[], int ctr){ 	// display all rec in table
	cout<<endl;
	for(int j=0; j<ctr; j++){
		if(!rec[j].isDel){
			cout<<rec[j].IDnum<<"\t";
			cout<<rec[j].fname<<"\t";
			cout<<rec[j].lname<<"\t";
			cout<<rec[j].GWA<<"\n";
		}
	}
}

void addRec(studRec rec[], int &ctr, int max){ 	// add rec at end next index
	// if(ctr==max) return 1;	// if max rec reached, exit from this func
	
	cout<<endl;
	cout<<"Max allowed record: "<<max<<endl;
	cout<<"Available rec slot: "<< (max-ctr) <<endl;
	
	int n; 
	do{	// get number of rec to be added
		cout<<"Add how many records? "; cin>>n;
	}while(!(n<=max-ctr));
	
	for(int j=ctr; j<ctr+n; j++){
		cout<<endl;
		cout<<"ID  Number: "; cin>>rec[j].IDnum;
		cout<<"First Name: "; cin>>rec[j].fname;
		cout<<"Last  Name: "; cin>>rec[j].lname;
		cout<<"Latest GWA: "; cin>>rec[j].GWA;
		rec[ctr].isDel=false;

	}
	ctr+=n;		// increment rec ctr by n
	showAll(rec, ctr);	// show all rec
}

void editRec(studRec rec[], int ctr){ 	// edit rec given IDnum
	int ID; 
	bool found=false;
	cout<<endl<<"ID: "; cin>>ID;
	for(int j=0; j<ctr; j++){
		if(ID==rec[j].IDnum && !rec[j].isDel){	// rec found
			found=true;
			cout<<"First Name: "; cin>>rec[j].fname;
			cout<<"Last  Name: "; cin>>rec[j].lname;
			cout<<"Latest GWA: "; cin>>rec[j].GWA;
		}
	}
    
	showAll(rec, ctr);	// show all rec
	if(!found) cout<<"No such ID#"<<endl;
}

void delRec(studRec rec[], int ctr){ 	// mark rec as deleted
	int ID; 
	bool found=false;
	cout<<endl<<"ID: "; cin>>ID;
	for(int j=0; j<ctr; j++){
		if(ID==rec[j].IDnum && !rec[j].isDel){	// rec found
			found=true;
			rec[j].isDel=true;	// rec is active
		}
	}
	showAll(rec, ctr);	// show all rec
	if(!found) cout<<"No such ID#"<<endl;
}

int main(){
	int max=5, ctr=0, opt=9;
	struct studRec rec[max];	
	do{
		opt=getOpt(); //get menu opt
		switch(opt){
			case 1: addRec(rec, ctr, max); break;	// add rec
			case 2: editRec(rec, ctr); break;	// edit recbreak;	// edit rec
			case 3: delRec(rec, ctr); break;	// del recbreak;	// del rec
			case 4: showRec(rec, ctr); break;	// show rec
			case 5: showAll(rec, ctr); break;	// show all
		}
	}while(opt!=0);	// exit program
}
