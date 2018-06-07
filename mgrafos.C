# include <iostream>

using namespace std;

# include <graphalgorithms.H>

using namespace Designar;

using GT = Graph<char>;
using mgra = Digraph<int>;

int main()
{
  GT g1;
  mgra graf;

 
  mgra::Node * gn[15];
  for (int i = 0; i < 15; ++i)
  {
  	/* code */
  	 gn[i] = graf.insert_node(i);
  }
  

  /* graf.for_each_node([graf](auto n){
  	cout << "nodo: " << n->get_info() << endl;
		
		// g1.for_each_adjacent_arc(n, [](auto a){
  		//	cout << "     arcos: " << a->get_info() << endl;		
  		});  	*/
 	
    //arcos del primer nodo
  	graf.insert_arc(gn[0], gn[1]);
  	graf.insert_arc(gn[0], gn[4]);
  	//arcos del segundo nodo
  	graf.insert_arc(gn[1], gn[2]);
  	graf.insert_arc(gn[1], gn[6]);
  	//arcos del tercer nodo
  	graf.insert_arc(gn[2], gn[3]);
  	graf.insert_arc(gn[2], gn[7]);
  	//arcos del cuarto nodo
  	graf.insert_arc(gn[3], gn[12]);
  	//arcos del quinto nodo
  	graf.insert_arc(gn[4], gn[5]);
  	graf.insert_arc(gn[4], gn[8]);
  	//arcos del sexto nodo
  	graf.insert_arc(gn[5], gn[6]);
  	graf.insert_arc(gn[5], gn[9]);
  	//arcos del septimo nodo
  	graf.insert_arc(gn[6], gn[7]);
  	graf.insert_arc(gn[6], gn[10]);
  	//arcos del octavo nodo
  	graf.insert_arc(gn[7], gn[11]);
  	graf.insert_arc(gn[7], gn[12]);
  	//arcos del noveno nodo
  	graf.insert_arc(gn[8], gn[9]);
  	graf.insert_arc(gn[8], gn[13]);
  	//arcos del decimo nodo
  	graf.insert_arc(gn[9], gn[10]);
  	graf.insert_arc(gn[9], gn[13]);
  	//arcos del decimo primero nodo
  	graf.insert_arc(gn[10], gn[11]);
  	graf.insert_arc(gn[10], gn[13]);
  	//arcos del decimo segundo nodo
  	graf.insert_arc(gn[11], gn[14]);
  	graf.insert_arc(gn[11], gn[12]);
  	
  	

  	depth_first_traverse(graf, [] (auto p)
	{
		 cout << p->get_info() << " ";
	});


  Path<mgra> path = depth_first_search_path(graf, gn[1], gn[11]);
  cout << "camino en profundidad--------------------------------------------------------" << endl;
  cout << "Path between " << gn[1]->get_info() << " and " << gn[11]->get_info() << ": ";

  path.for_each([] (auto c, auto r)
		{
			//cout << "entro el puto  " << endl;	
		  cout << c->get_info() << " ";

		  if (r != nullptr)
		  {
		  	//cout << "y aqui entro el puto  " << endl;	
		    cout << r->get_info() << " ";
		  }
		});

  cout << endl << endl;


cout << "camino en amplitud--------------------------------------------------------" << endl;
  Path<mgra> path2 = breadth_first_search_path(graf, gn[1], gn[11]);

  cout << "Path between " << gn[1]->get_info() << " and " << gn[11]->get_info() << ": ";

  path2.for_each([] (auto c, auto r)
		{
			//cout << "entro el puto  " << endl;	
		  cout << c->get_info() << " ";

		  if (r != nullptr)
		  {
		  	//cout << "y aqui entro el puto  " << endl;	
		    cout << r->get_info() << " ";
		  }
		});

  cout << endl << endl;


  cout << "numero de arcos: " << graf.get_num_arcs() << endl;
  cout << "Everything ok!\n";
  
  return 0;
}
