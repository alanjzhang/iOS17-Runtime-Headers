/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialAdminStatus : NSObject <NSSecureCoding> {
    bool  _admin;
    NSDate * _dateUpdated;
}

@property (getter=isAdmin, nonatomic, readonly) bool admin;
@property (nonatomic, readonly) NSDate *dateUpdated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateUpdated;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdminStatus:(bool)arg1 dateUpdated:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isAdmin;

@end
