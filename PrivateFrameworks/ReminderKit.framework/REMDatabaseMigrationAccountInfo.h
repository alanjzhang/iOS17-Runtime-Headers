/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMDatabaseMigrationAccountInfo : NSObject {
    NSString * _identifier;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithAccountType:(long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (bool)isCloudKit;
- (id)name;
- (long long)type;

@end
