/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface _ML3DatabaseConnectionWrapper : NSObject {
    NSThread * _borrowingThread;
    ML3DatabaseConnection * _connection;
    NSThread * _owningThread;
    unsigned long long  _useCount;
}

@property (nonatomic, retain) NSThread *borrowingThread;
@property (nonatomic, retain) ML3DatabaseConnection *connection;
@property (nonatomic, retain) NSThread *owningThread;
@property (nonatomic) unsigned long long useCount;

- (void).cxx_destruct;
- (id)borrowingThread;
- (id)connection;
- (id)debugDescription;
- (id)description;
- (id)initWithConnection:(id)arg1;
- (id)owningThread;
- (void)setBorrowingThread:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setOwningThread:(id)arg1;
- (void)setUseCount:(unsigned long long)arg1;
- (unsigned long long)useCount;

@end
