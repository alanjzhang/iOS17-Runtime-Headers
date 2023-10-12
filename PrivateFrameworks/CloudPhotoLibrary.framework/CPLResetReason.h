/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResetReason : NSObject <NSSecureCoding> {
    NSDate * _date;
    NSString * _reason;
    bool  _tentative;
    NSString * _uuid;
}

@property (nonatomic, readonly, copy) id asPlist;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic) bool tentative;
@property (nonatomic, readonly, copy) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asPlist;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 reason:(id)arg2;
- (id)initWithPlist:(id)arg1;
- (id)reason;
- (id)reasonDescriptionWithNow:(id)arg1;
- (void)setTentative:(bool)arg1;
- (bool)tentative;
- (id)uuid;

@end
