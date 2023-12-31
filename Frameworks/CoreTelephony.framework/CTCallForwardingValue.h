/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTCallForwardingValue : NSObject <NSCopying, NSSecureCoding> {
    int  _clss;
    bool  _enabled;
    NSNumber * _noReplyTime;
    int  _reason;
    NSString * _saveNumber;
}

@property (nonatomic) int clss;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSNumber *noReplyTime;
@property (nonatomic) int reason;
@property (nonatomic, retain) NSString *saveNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)clss;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)noReplyTime;
- (int)reason;
- (id)saveNumber;
- (void)setClss:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setNoReplyTime:(id)arg1;
- (void)setReason:(int)arg1;
- (void)setSaveNumber:(id)arg1;

@end
