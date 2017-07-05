#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main( int argc, char* argv[] )
{
    int nTreeHeight;

	if ( argc > 0 )
		nTreeHeight = atoi ( argv[1] );
	else
		nTreeHeight = 15;

	int nStar;
	int nLine;

	//draw Tree
	for ( nLine = 0; nLine < nTreeHeight; nLine++ )
	{
		int nGap = nTreeHeight - nLine;
		for ( int nIdx = 1; nIdx <= nGap; nIdx++ )
			cout<< " ";

		for ( nStar = 0; nStar < ( 2 * nLine - 1 ); nStar++ )
			cout<< "*";
		cout<< endl;
		usleep(2000);
	}

	//draw trunk
	int nTrunkHeight = nTreeHeight / 3;
	int nTrunkWidth  = nStar / 3;
	int nWhiteSpaces = ( ( nStar - nTrunkWidth ) / 2 ) + 1;

	for ( int nIdx = 0; nIdx < nTrunkHeight; nIdx++ )
	{
		int nTmp;
		for ( nTmp = 0; nTmp < nWhiteSpaces; nTmp++ )
			cout<< " ";

		for ( nTmp = 0; nTmp < nTrunkWidth; nTmp++ )
			cout<< "*";
		cout<< endl;
		usleep(2000);
	}

	return 0;
}
