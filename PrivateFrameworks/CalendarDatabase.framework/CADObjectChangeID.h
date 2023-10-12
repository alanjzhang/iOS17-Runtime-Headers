/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CADObjectChangeID : NSObject <NSSecureCoding> {
    long long  _changeID;
    int  _entityType;
}

@property (nonatomic, readonly) long long changeID;
@property (nonatomic, readonly) int entityType;

+ (bool)supportsSecureCoding;

- (long long)changeID;
- (void)encodeWithCoder:(id)arg1;
- (int)entityType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(int)arg1 changeID:(long long)arg2;

@end
