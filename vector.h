using namespace std;
class Vector
{
	public:
		float x,y,z;
		friend istream& operator >> (istream & is,Vector &v)
		{
			cout<<"Enter x coordinate:";
			is>>v.x;
			cout<<"Enter y coordinate:";
			is>>v.y;
			cout<<"Enter z coordinate:";
			is>>v.z;
			return is;
		}
		friend ostream & operator << (ostream & os,Vector & v)
		{
			os<<"("<<v.x<<")i+"<<"("<<v.y<<")j+"<<"("<<v.z<<")k"<<endl;
			return os;
		}
		friend Vector operator +(Vector a,Vector b)
		{
			Vector sum;
			sum.x=a.x+b.x;
			sum.y=a.y+b.y;
			sum.z=a.z+b.z;
			return sum;
		}
		friend Vector operator ^(Vector a,Vector b)
		{
			Vector dot;
			dot.x=a.x*b.x;
			dot.y=a.y*b.y;
			dot.z=a.z*b.z;
			cout<<"DOT PRODUCT IS:";
			cout<<dot.x+dot.y+dot.z;
			cout<<endl;
			return dot;		
		}
		friend Vector operator *(Vector a,Vector b)
		{
			Vector cross;
			cross.x=a.y*b.z-a.z*b.y;
			cross.y=a.x*b.z-a.z*b.x;
			cross.z=a.x*b.y-a.y*b.x;
			return cross;
		}
};

