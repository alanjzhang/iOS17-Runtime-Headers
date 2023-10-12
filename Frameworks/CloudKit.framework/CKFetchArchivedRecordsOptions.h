/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchArchivedRecordsOptions : NSObject <NSCopying, NSSecureCoding> {
    CKServerChangeToken * _previousServerChangeToken;
}

@property (nonatomic, copy) CKServerChangeToken *previousServerChangeToken;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (id)previousServerChangeToken;
- (void)setPreviousServerChangeToken:(id)arg1;

@end
