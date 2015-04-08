/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSURL, TSUASLClient, TSUASLLogFile;

@interface TSULogCollaboration : NSObject {
    TSUASLClient *_aslClient;
    TSUASLLogFile *_currentLogFile;
    int _filterLevel;
    int _logFileLevelMask;
    NSURL *_logFileURL;
    BOOL _shouldLogCommandTrace;
    BOOL _shouldLogToFile;
    BOOL _shouldLogToStderr;
    int _stderrLevelMask;
}

@property int filterLevel;
@property(readonly) NSURL * logFileURL;
@property BOOL shouldLogCommandTrace;
@property BOOL shouldLogToFile;
@property BOOL shouldLogToStderr;

+ (void)defineCategories;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)_clampLevelToValidRange:(int)arg1;
- (id)_createASLClient;
- (id)_createLogFileURL;
- (id)aslClient;
- (id)description;
- (int)filterLevel;
- (id)init;
- (id)logFileURL;
- (void)setFilterLevel:(int)arg1;
- (void)setShouldLogCommandTrace:(BOOL)arg1;
- (void)setShouldLogToFile:(BOOL)arg1;
- (void)setShouldLogToStderr:(BOOL)arg1;
- (BOOL)shouldLogCommandTrace;
- (BOOL)shouldLogToFile;
- (BOOL)shouldLogToStderr;

@end