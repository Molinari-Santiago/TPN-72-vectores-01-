#include<bits/stdc++.h>
using namespace std;
vector<int> GenerarVector (vector<int> V, int n);
int SumarElementosVector (vector<int> V);
void MostrarVector(vector<int> V);
int main(){
	int n=50;
	vector<int> V;
	V=GenerarVector (V, n);
	MostrarVector(V);
	
	cout<<"la suma de los elementos del vector son: "<<SumarElementosVector(V)<<endl;
	
	
	return 0;
}
vector<int>GenerarVector(vector<int> A , int N)
{
	int i;        
	srand (time (NULL));
	int e;
	for(i=0; i<N; i++)
	{
		e=rand()%100;
		
	A.push_back (e);
	}
	return A;
	}
	int SumarElementosVector (vector<int> V){
		
		int s;
		for(int i=0; i<V.size(); i++){
			s+=V[i];
		}
		return s;
	}
void MostrarVector(vector <int> A)
{
	int i;
	
	for( i=0; i<A.size(); i++ )
	{
	
	cout<<A[i]<<"/";
	}
		cout<<endl;
}

