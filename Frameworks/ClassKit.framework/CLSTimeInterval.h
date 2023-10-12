/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSTimeInterval : CLSObject <CLSRelationable> {
    double  _length;
    NSDate * _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double length;
@property (nonatomic, retain) NSDate *startTime;
@property (readonly) Class superclass;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)length;
- (void)setLength:(double)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
