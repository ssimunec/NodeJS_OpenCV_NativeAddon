#include <node.h>
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace v8;
using namespace std;
using namespace cv;

void ConvertImage(const FunctionCallbackInfo<Value>& args) {
   // LOAD image
   Mat image = imread("/home/stanislav/projects/node_cpp/image.jpg"); 
   
   Mat gray;
   // convert RGB image to gray
   cvtColor(image, gray, CV_BGR2GRAY);
   imwrite("/home/stanislav/projects/node_cpp/image_gray.jpg", gray);

   cout << "Image converted" << endl;
}

void Initialize(Local<Object> exports) {
   NODE_SET_METHOD(exports, "convertImage", ConvertImage);
}

NODE_MODULE(addon, Initialize);