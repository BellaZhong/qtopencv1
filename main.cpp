#include <QCoreApplication>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    namedWindow( "src", WINDOW_AUTOSIZE );
    Mat src1 = imread( "lena.jpg" );
    while(1)
    {
        imshow( "src", src1 );
        char c =  waitKey(30);
        if( 27==c )
            return 0;
    }

//    return a.exec();
}
