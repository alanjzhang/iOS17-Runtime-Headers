/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSignificantElevationSample : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * fElevationAscended;
    NSNumber * fElevationDescended;
    NSDate * fEndDate;
    unsigned long long  fRecordId;
    NSUUID * fSourceId;
    NSDate * fStartDate;
}

@property (nonatomic, readonly) NSNumber *elevationAscended;
@property (nonatomic, readonly) NSNumber *elevationDescended;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;

// CMSignificantElevationSample (null)

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)elevationAscended;
- (id)elevationDescended;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilteredElevation:(const struct CLElevationChangeEntry { double x1; double x2; unsigned int x3; unsigned int x4; int x5; double x6; int x7; int x8; float x9; unsigned char x10; unsigned short x11; float x12; bool x13; bool x14; }*)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 elevationAscended:(id)arg5 elevationDescended:(id)arg6;
- (id)initWithSignificantElevation:(const struct CLSignificantElevation { int x1; unsigned char x2[16]; double x3; double x4; unsigned int x5; unsigned int x6; double x7; bool x8; }*)arg1;
- (unsigned long long)recordId;
- (id)sourceId;
- (id)startDate;

@end
