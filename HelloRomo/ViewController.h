//
//  ViewController.h
//  HelloRomo
//

#import <UIKit/UIKit.h>
#import <RMCore/RMCore.h>
#import <RMCharacter/RMCharacter.h>
#import "AbstractOCVViewController.h"


@interface ViewController : AbstractOCVViewController <RMCoreDelegate,AVSpeechSynthesizerDelegate> {
    double _min, _max;
}

@property (strong, nonatomic) IBOutlet UIView *romoView;
@property (strong, nonatomic) IBOutlet UIImageView *signImageView;
@property (nonatomic, strong) RMCoreRobotRomo3 *Romo3;
@property (nonatomic, strong) RMCharacter *Romo;
@property (strong, nonatomic) AVCaptureStillImageOutput *stillImageOutput;
- (void)addGestureRecognizers;

@end
