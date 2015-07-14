#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <opencv2/imgproc/imgproc_c.h>


@interface AbstractOCVViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    __weak IBOutlet UIImageView *_imageView;
    
    AVCaptureSession *_session;
    AVCaptureDevice *_captureDevice;
    
    BOOL _useBackCamera;
    
    NSString *triggerImageURL;
    NSString *triggerImageURL1;
    NSString *triggerImageURL2;
    NSString *triggerImageURL3;
    NSString *triggerImageURL4;
}


- (UIImage*)getUIImageFromIplImage:(IplImage *)iplImage;
- (void)didCaptureIplImage:(IplImage *)iplImage;
- (void)didFinishProcessingImage:(IplImage *)iplImage;
- (void)saveFinishProcessingImage:(IplImage *)iplImage;


@end