/* Generated by RuntimeBrowser.
 */

@protocol DebugHierarchyObject <NSObject>

@optional

+ (NSArray *)debugHierarchyAdditionalGroupingIDs;
+ (NSString *)debugHierarchyChildGroupingID;
+ (NSArray *)debugHierarchyObjectsInGroupWithID:(NSString *)arg1 onObject:(id <DebugHierarchyObject>)arg2 outOptions:(id*)arg3;
+ (NSArray *)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(NSString *)arg1 onObject:(id <DebugHierarchyObject>)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

- (long long)debugHierarchyVisibility;

@end
