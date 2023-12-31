/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCIDRSchedulerPeriodGroup : NSObject {
    unsigned int  _basePeriodCount;
    unsigned int  _framesPerBasePeriod;
    NSMutableArray * _schedulerItems;
    NSMutableArray * _streams;
}

@property (nonatomic, readonly) unsigned int basePeriodCount;

- (void)addStream:(id)arg1;
- (unsigned int)basePeriodCount;
- (id)computeScheduleItemList;
- (void)computeStreamsIDRPosition;
- (void)dealloc;
- (id)description;
- (id)initWithPeriodCount:(unsigned int)arg1 framesPerBasePeriod:(unsigned int)arg2;

@end
