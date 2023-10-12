/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLConnectionManager : NSObject {
    id /* block */  _filter;
    NSSQLCore * _sqlCore;
}

- (void)dealloc;
- (void)disconnectAllConnections;
- (bool)handleStoreRequest:(id)arg1;
- (id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3;
- (id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2;
- (void)scheduleBarrierBlock:(id /* block */)arg1;
- (void)scheduleConnectionsBarrier:(id /* block */)arg1;
- (void)setExclusiveLockingMode:(bool)arg1;
- (id)sqlCore;

@end
