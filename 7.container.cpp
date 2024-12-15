#include<iostream.h>
#include<map>
#include<string>
#include<utility>
Using namespace std;
Int main()
{
Typedefmap<string.int>mapType;
mapTypepopulationMap;
populationMap.insert(pair<stringint>(“MH”,112));
populationMap.insert(pair<stringint>(“UP”,112));
populationMap.insert(mapType::value_type(“MP”,726));
populationMap.insert(mapType::value_type(“AP”,726));
mapType::iteratoriter=-populationMap.end();
populationMap.erase(iter);
//output the size of the map
Cout<<”size of populationMap:”<<populationMap.end();++iter)
{
Cout<<iter->first<<”:”
<<iter->second<<”million\n”;
}
//find will return an iterator to the matching element if it is found
//or to the end of the map if the key is not found
String state;
Cout<<”\nEnter the state”;
Cin>>state;
iter=populationMap.find(state);
If(iter!=populationMap.end())
Cout<<state<<”s population is:-”<<iter->second<<”million\n”;
else
Cout<<”key is not in polpulationMap”<<”\n”;
//clear the entries in the map
populationMap.clear();
}
//Output:-
Size of populationMap:-3
AP:-845 Million
MH:-112 Million
MP:-726 Million
Enter the State:-MP
MP’s population is 726 million

