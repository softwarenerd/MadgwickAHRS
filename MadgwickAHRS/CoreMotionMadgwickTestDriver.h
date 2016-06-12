//
//  CoreMotionMadgwickTestDriver.h
//  MadgwickAHRS
//
//  Created by Brian Lambert on 6/7/16.
//
//  CoreMotionMadgwickTestDriver uses CoreMotion device motion updates as IMU input data to
//  MadgwickAHRS. It then uses the resulting quaternion to calculate Euler angles.
//

#import <Foundation/Foundation.h>
#import "CoreMotionMadgwickTestDriverDelegate.h"

// CoreMotionMadgwickTestDriver interface.
@interface CoreMotionMadgwickTestDriver : NSObject

// Properties.
@property (nonatomic, weak, nullable) id<CoreMotionMadgwickTestDriverDelegate> delegate;

// Class initializer.
- (nullable instancetype)initSampleFrequencyHz:(float)sampleFrequencyHz
                                          beta:(float)beta;

// Starts the driver.
- (void)start;

// Stop the driver.
- (void)stop;

@end
