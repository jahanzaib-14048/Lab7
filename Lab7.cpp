#include <iostream>

using namespace std;

class Band
{
	protected:
		int count;
		virtual int getcount()=0;
    public:
    	Band(){};
};

////////////////////////////////////////
////////////////////////////////////////
////////////////////////////////////////

class Metal:public Band
{
	public:
		int member;
		int del;
		int pyrotechnicians;
		Metal();
		void Add_pyro();
		void Add_member();
		void Remove_pyro();
		void Remove_member();
		int getcount();
};

Metal::Metal()
{
	this->count=0;
	this->pyrotechnicians=0;
	this->member=0;
	this->del=0;
}


void Metal::Add_pyro()
{
	this->pyrotechnicians++;
	this->count++;	
}

void Metal::Remove_pyro()
{
	this->pyrotechnicians--;
	this->count--;
	this->del++;
}

void Metal::Add_member()
{
	this->member++;
	this->count++;
}

void Metal::Remove_member()
{
	this->member--;
	this->count--;
	this->del++;
}

Metal::getcount()
{
	//count = count;
	return count;
}


//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////

class Marching:public Band
{
	public:
		int member;
		Marching(){};
		void March();
		int getcount();
		//Setter & Getter....		
		void set_mem(int member)
		{
			this->member=member;
		}
		
		int get_mem()
		{
			return this->member;
		}
};

int Marching::getcount()
{
	count=member;
	
	return count;
}

void Marching::March()
{
	cout<<"Band is Performing."<<endl;
}


/////////////////////////////////////
/////////////////////////////////////
/////////////////////////////////////

class Symphony:public Band
{
	public:
		int conductor;
		int crew;
		int del;
		Symphony();
		void Add_conductor();
		void Add_crew();
		void Remove_conductor();
		void Remove_crew();
		int getcount();
		
};

Symphony::Symphony()
{
	this->count=0;
	this->conductor=0;
	this->crew=0;
	this->del=0;
}

Symphony::getcount()
{	
	return count;
}

void Symphony::Add_conductor()
{
	this->conductor++;
	this->count++;
}

void Symphony::Remove_conductor()
{
	this->conductor--;
	this->count--;
	this->del++;
}

void Symphony::Add_crew()
{
	this->crew++;
	this->count++;
}

void Symphony::Remove_crew()
{
	this->crew--;
	this->count--;
	this->del++;
}

////////////////////////////////////////
////////////////////////////////////////
////////////////////////////////////////

class Jazz:public Band
{
	public:
		Jazz(){};
		int member;
		int getcount();
		
		void set_mem(int member)
		{
			this->member=member;
		}
		
		int get_mem()
		{
			return this->member;
		}
};
Jazz::getcount()
{
	count=member;
	
	return count;
}

///////////////////////////////////////
///////////////////////////////////////
///////////////////////////////////////
int main()
{
	cout<<"**********METAL BAND**********"<<endl<<endl;
	Metal m;
	
	m.Add_member();
	m.Add_member();
	m.Add_member();
	m.Add_member();
	m.Add_pyro();
	m.Add_pyro();
	m.Add_pyro();
	m.Add_pyro();
	m.Add_pyro();
	m.Add_pyro();
	
	int a = m.getcount();	
	cout<<"Total Members in METAL BAND were: "<< a <<endl;
	
	m.Remove_member();
	m.Remove_member();
	m.Remove_member();
	m.Remove_member();
	m.Remove_pyro();
	
	cout<<"Total PyroTechnicians are: "<<m.pyrotechnicians<<endl;
	cout<<"Members Deleted are: " << m.del << endl;
	int b = m.getcount();
	
	cout<<"Total Members After Deleted are: "<< b << endl << endl;
	
///////////////////////////////////////////////////////////////////////////////////////////	
	cout<<"**********MARCHING BAND**********"<<endl<<endl;
	Marching z;
	z.set_mem(9);
	cout<<"Total Members in MARCHING BAND are: " << z.get_mem() << endl<<endl;
	
///////////////////////////////////////////////////////////////////////////////////////////
	
	cout<<"**********SYMPHONY BAND********"<<endl << endl;
	
	Symphony s;
	
	s.Add_conductor();
	s.Add_conductor();
	s.Add_conductor();
	s.Add_conductor();
	s.Add_conductor();
	s.Add_conductor();
	s.Add_conductor();
	s.Add_crew();
	s.Add_crew();
	s.Add_crew();
	s.Add_crew();
	s.Add_crew();
	
	int c = s.getcount();
	
	cout<<"Total Members in SYMPHONY BAND are: " << c << endl;
	
	s.Remove_conductor();
	s.Remove_conductor();
	s.Remove_conductor();
	s.Remove_crew();
	s.Remove_crew();
	s.Remove_crew();
	s.Remove_crew();
	s.Remove_crew();
	cout<<"Total Conductors are: "<<s.conductor<<endl;
	cout<<"Members Deleted are: " << s.del << endl;
	
	int d = s.getcount();
	
	cout <<"Total Members After Deleted are: "<< d <<endl<<endl;
	
///////////////////////////////////////////////////////////////////////////////////////////
	cout<<"**********JAZZ BAND**********"<<endl<<endl;
	Jazz x;
	x.set_mem(12);
	cout<<"Total Members in JAZZ BAND are: " << x.get_mem() << endl<<endl;
	cout<<"**********THE END**********";

///////////////////////////////////////////////////////////////////////////////////////////

}
