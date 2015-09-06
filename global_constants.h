//
//  global_constants.h
//  MASPEP
//
//  Created by Junior Cunha on 9/6/15.
//  Copyright (c) 2015 Vanderlei Cunha Jr. All rights reserved.
//

#ifndef MASPEP_global_constants_h
#define MASPEP_global_constants_h




/*OpenCV Libraries*/


using namespace std;
using namespace cv;


/*Global Constants*/
const double PI = 3.1415;

/*Type Definitions*/

/*Classes*/
class FaceDetection{
    
public:
    
    FaceDetection();
    ~FaceDetection();
    
private:
    
    
};


class EyeCenterTracking
{
    
public:
private:
    
};


/*Function Declarations*/
void WindowsAndTrackbars(const char* rgb_image_window, const char* harris_corner_window, const char* trackbarName, int thresh, int max_tresh, Mat img);

/** \brief displays TWO windows with trackbar
 
 * \param [in] Name the display Window
 * \param [out]
 * \param [in]
 * \param refine
 * \param [in]
 * \author Vanderlei Cunha Jr <vcunha@wpi.edu>
 */



void convertVideoToGrayscale(Mat frame);
/** \brief takes in video in grayscale
 
 * \param [in] frame
 * \return grayscale image in the same frequency and fps as input
 
 * \author Vanderlei Cunha Jr <vcunha@wpi.edu>
 */

void displayVideoFromFile(const char* WindowName, const char* fileName);







/** \brief
 
 * \param [in]
 * \param [out]
 * \param [in]
 * \param refine
 * \param [in]
 * \author Vanderlei Cunha Jr <vcunha@wpi.edu>
 */



#endif
