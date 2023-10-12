/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMReminderFetchOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _includeConcealed;
    bool  _includeDueDateDeltaAlerts;
}

@property (nonatomic) bool includeConcealed;
@property (nonatomic) bool includeDueDateDeltaAlerts;

+ (id)defaultFetchOptions;
+ (id)fetchOptionsIncludingConcealed;
+ (id)fetchOptionsIncludingDueDateDeltaAlerts;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchOptionsIncludingConcealed;
- (id)fetchOptionsIncludingDueDateDeltaAlerts;
- (unsigned long long)hash;
- (bool)includeConcealed;
- (bool)includeDueDateDeltaAlerts;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setIncludeConcealed:(bool)arg1;
- (void)setIncludeDueDateDeltaAlerts:(bool)arg1;

@end
