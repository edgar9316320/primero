# include <graphalgorithms.H>
# include <iostream>
# include <stdlib.h>

using namespace std;
	
	using GT  = Graph<string, lint_t>;

int main(int argc, char const *argv[])
{
	/* code */
	GT g, h, i;
  
  auto n1 = g.insert_node("Lara");
  auto n2 = g.insert_node("Portuguesa");
  auto n3 = g.insert_node("Barinas");
  auto n4 = g.insert_node("Merida");
  auto n5 = g.insert_node("Trujillo");
  auto n6 = g.insert_node("Zulia");

  g.insert_arc(n1, n2, 100);
  g.insert_arc(n2, n3, 150);
  g.insert_arc(n3, n4, 150);
  g.insert_arc(n4, n5, 180);
  g.insert_arc(n5, n6, 200);
  g.insert_arc(n1, n5, 300);
	
	cout << "sirvio: " << endl;
	cout << "quien es n1: " << n1->get_info() <<endl;
	g.for_each([] (auto c, auto r)
		{
		  cout << c->get_info() << " ";

		  if (r != nullptr)
		    cout << r->get_info() << " ";
		});

	return 0;
}