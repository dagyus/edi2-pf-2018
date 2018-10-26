#include <iostream>

#define interface struct
#define implement public

interface HelpHandler
{
    enum HelpTheme { WITHOUT_HELP = 0, HAVE_HELP = 1 } ;

    virtual ~HelpHandler( void ) {}

    virtual void help( void ) = 0 ;
    virtual bool haveHelp( void ) = 0 ;
    virtual void showHelp( void ) = 0 ;
};

class ConcretHelper_1 : implement HelpHandler
{
public:
    ConcretHelper_1( HelpHandler* successor, HelpTheme helpTheme = WITHOUT_HELP )
        : successor_( successor ), helpTheme_( helpTheme ) {}
    ~ConcretHelper_1( void )
    {
        delete successor_ ;
    }

    virtual bool haveHelp( void )
    {
        return helpTheme_ != WITHOUT_HELP ;
    }
    virtual void help( void )
    {
        if ( haveHelp() ) {
            showHelp() ;
        } else {
            successor_ -> help() ;
        }
    }
    virtual void showHelp( void )
    {
        std::cout << "ConcretHelper_1" << std::endl ;
    }
private:
    HelpHandler* successor_ ;
    HelpTheme helpTheme_ ;
};

class ConcretHelper_2 : implement HelpHandler
{
public:
    ConcretHelper_2( HelpHandler* successor, HelpTheme helpTheme = WITHOUT_HELP )
        : successor_( successor ), helpTheme_( helpTheme ) {}
    ~ConcretHelper_2( void )
    {
        delete successor_ ;
    }

    virtual bool haveHelp( void )
    {
        return helpTheme_ != WITHOUT_HELP ;
    }
    virtual void help( void )
    {
        if ( haveHelp() ) {
            showHelp() ;
        } else {
            successor_ -> help() ;
        }
    }
    virtual void showHelp( void )
    {
        std::cout << "ConcretHelper_2" << std::endl ;
    }
private:
    HelpHandler* successor_ ;
    HelpTheme helpTheme_ ;
};

class ConcretHelper_3 : implement HelpHandler
{
public:
    ConcretHelper_3( HelpHandler* successor, HelpTheme helpTheme = WITHOUT_HELP )
        : successor_( successor ), helpTheme_( helpTheme ) {}
    ~ConcretHelper_3( void )
    {
        delete successor_ ;
    }

    virtual bool haveHelp( void )
    {
        return helpTheme_ != WITHOUT_HELP ;
    }
    virtual void help( void )
    {
        if ( haveHelp() ) {
            showHelp() ;
        } else {
            successor_ -> help() ;
        }
    }
    virtual void showHelp( void )
    {
        std::cout << "ConcretHelper_3" << std::endl ;
    }
private:
    HelpHandler* successor_ ;
    HelpTheme helpTheme_ ;
};

int main()
{
    // Build the chain ...

    HelpHandler* helper_1 = new ConcretHelper_1( nullptr, HelpHandler::HAVE_HELP ) ;
    HelpHandler* helper_2 = new ConcretHelper_2( helper_1, HelpHandler::HAVE_HELP ) ;
    HelpHandler* helper_3 = new ConcretHelper_3( helper_1 ) ;

    helper_3 -> help() ;
    helper_2 -> help() ;

    delete helper_3 ;
    delete helper_2 ;
    delete helper_1 ;

    return 0 ;
}
