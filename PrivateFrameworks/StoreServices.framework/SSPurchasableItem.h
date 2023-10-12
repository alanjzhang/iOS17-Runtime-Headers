/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchasableItem : NSObject {
    SSSQLiteDatabase * _database;
    NSDictionary * _propertyValues;
    NSString * _tableName;
}

+ (id)allPropertyKeys;
+ (id)databaseTable;
+ (id)sortByDatePurchasedKey;

- (long long)accountUniqueIdentifier;
- (id)datePurchased;
- (void)dealloc;
- (id)description;
- (id)initWithPropertyValues:(id)arg1;
- (bool)isHidden;
- (long long)pid;
- (id)propertyValues;
- (long long)storeID;

@end