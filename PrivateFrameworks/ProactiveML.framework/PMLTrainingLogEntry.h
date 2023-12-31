/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLTrainingLogEntry : NSObject {
    unsigned long long  _serverIteration;
    double  _timestamp;
}

@property (nonatomic, readonly) unsigned long long serverIteration;
@property (nonatomic, readonly) double timestamp;

- (id)initWithTimestamp:(double)arg1 serverIteration:(unsigned long long)arg2;
- (unsigned long long)serverIteration;
- (double)timestamp;

@end
