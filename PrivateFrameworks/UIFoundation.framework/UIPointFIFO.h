/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface UIPointFIFO : NSObject {
    UIPointFIFO * _nextFIFO;
}

@property (nonatomic, retain) UIPointFIFO *nextFIFO;

- (void)addPoint;
- (void)clear;
- (void)dealloc;
- (void)emitPoint;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)nextFIFO;
- (void)setNextFIFO:(id)arg1;

@end